# Native dependencies

- `runtime/`: androidrecomp, commit
  `4a2004953e396fca04e940c300cad7c9f5fa77f3`, MIT license.
  Source: https://github.com/sp00nznet/androidrecomp
  Local changes in `elf_image.cpp` add bounded GNU-hash symbol counting,
  weak-symbol handling and UTF-8 file paths. `arm64_runtime.c` adds the typed
  native-dispatch hook. License: `androidrecomp-LICENSE.txt`.
- `include/gdextension_interface.h`: Godot Engine GDExtension C interface,
  version 4.7.2, MIT license. Its full copyright and license are retained in
  the header. Source: https://github.com/godotengine/godot/tree/4.7.2-stable
- The bundled `libc++_shared.so` and the corresponding AOT C translation use
  LLVM libc++, libc++abi and libunwind. Licenses: `libcxx-LICENSE.txt`,
  `libcxxabi-LICENSE.txt`, `libunwind-LICENSE.txt`.
  The binary identifies Android LLVM commit
  `5e96669f06077099aa41290cdb4c5e6fa0f59349`.
  Source: https://android.googlesource.com/toolchain/llvm-project/

These licenses cover the named native dependencies. They do not replace the
licensing of the game's own code and assets.
