This is zlib 1.3.2 with the minizip contrib files used by Unity.

Tracked here: https://github.com/Unity-Technologies/zlib on branch `unity-trunk-master`
Based on the upstream tag v1.3.2 of https://github.com/madler/zlib (tag object 216c70c020aa53f0c40920d155f808b6b59c9acb).
The branch `unity-master` is a separate line with a different symbol prefix and is not described here.

Files: the zlib sources and headers from the top level of the upstream tag, plus the minizip files
zip.c unzip.c zip.h unzip.h ioapi.c ioapi.h crypt.h skipset.h ints.h from contrib/minizip. They are
kept flat in this directory. Everything else from upstream (build systems, tests, examples,
documentation, other contrib) is not part of this tree. projects/VisualStudio is Unity-authored and
not maintained against upstream.

Unity-specific changes on top of the pristine upstream files (the complete list; the diff between the
import commit and the patch commit shows all of them):

 1. Symbol prefixing. zconf.h maps every exported name X to unity_z_X when UNITY_Z_PREFIX is 1 (the
    default; the build sets it to 0 on Linux, macOS and Windows and on EmbeddedLinux and QNX, see
    External/zlib/zlib.jam.cs in Unity).
    The mapping block is upstream's Z_PREFIX block with "z_" replaced by "unity_z_".
    Related: zutil.h maps z_errmsg, zlib.h defines the unity_z_*Init macros, gzread.c undefs
    unity_z_gzgetc, and zconf.h always typedefs Byte (the __MACTYPES__ guard would skip the typedef
    of the renamed unity_z_Byte).
 2. Assert is renamed to ZAssert (zutil.h and all uses in deflate.c, trees.c, zutil.c).
 3. Z_UNITY_INFLATE_IGNORE_CRC (zlib.h, inflate.c): OR this flag into the flush argument of inflate()
    to skip check value calculation and verification.
 4. inflate.h: COPY is undefined before the inflate_mode enum, because gzguts.h defines it.
 5. Platform includes: zconf.h defines HAVE_UNISTD_H (as 1, because zlib 1.3.2 tests it with
    "#if HAVE_UNISTD_H-0") unless _MSC_VER or it is already defined; gzlib.c and gzread.c include
    <unistd.h> unless _MSC_VER; gzguts.h has #pragma once.
 6. minizip ioapi.c: forward prototypes for the static *_file_func functions.
 7. minizip skipset.h (new in zlib 1.3.2, included by zip.c): all functions are made static, and
    set_clear, which minizip does not use, is compiled out with #if 0. Without this, zip.o exports 14
    generically named globals (set_alloc, set_free, set_insert, set_found, set_rand, set_seed, set_start,
    set_end, set_ok, set_clear, set_grow, set_sweep, set_node, set_uniq) that the unity_z_ prefix does
    not cover, even with UNITY_Z_PREFIX=1. zip.c is unchanged. This has the same effect as upstream's
    commit c68d46a ("Make skipset functions static") in zlib 1.4, hand-ported because that commit does
    not apply to 1.3.2's skipset.h. Drop this item when importing 1.4 or later, which has the fix.

Notes:
 - zlib 1.4 has been released (tag v1.4). This tree stays on 1.3.2, the latest 1.3.x release.
 - In 1.3.2, z_off_t defaults to long long instead of long where <unistd.h> is not used (for example
   MSVC builds). This comes from upstream; 1.4 returns the default to long.

To upgrade:
1: Import the new upstream tag, unmodified, for the file set above in its own commit, and check that
   every file is byte-identical to the tag (also add any file the new version needs).
2: In a second commit re-apply the list above, so that the diff between the two commits is exactly
   the Unity-specific changes. Regenerate the prefix mapping from the new version's Z_PREFIX block.
   Note that upstream can change how a macro is tested (e.g. HAVE_UNISTD_H in 1.3.2), so compile
   with UNITY_Z_PREFIX=0 and 1 and compare the exported symbols with the previous version.
   Drop any item above that the new upstream version already contains (item 7 for zlib 1.4 or later).
3: Replace the contents of External/zlib/src in the Unity repository with this tree and mention the
   commit of this repository in the pull request.
