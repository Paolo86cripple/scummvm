# Hollywood-only ScummVM builds

The `dev-hollywood-builds` branch is a snapshot of the Hollywood development
branch, with a separate GitHub Actions workflow for downloadable builds.
Only the Hollywood engine and its game detector are compiled into ScummVM;
no other engines, engine plugins, tests, or developer tools are packaged.
Game data is not included. These are unofficial development builds.

## Downloads

Open [Hollywood builds](https://github.com/neuromancer/scummvm/actions/workflows/ci.yml?query=branch%3Adev-hollywood-builds),
select a successful run for this branch, and download its artifacts:

- `scummvm-hollywood-win32`: extract the ZIP and run `scummvm.exe`. This is a
  32-bit x86 Windows build, with SDL2, zlib, libpng, and the C++ runtime linked
  statically; no separate library DLLs are required.
- `scummvm-hollywood-linux-x86_64`: extract the ZIP and then the enclosed
  `.tar.gz`, which preserves the executable permission. Run `./scummvm`.
  Built on Ubuntu 22.04 for x86_64, with system SDL2, zlib, and libpng libraries.
  On Ubuntu 22.04 or newer, install these with
  `sudo apt-get install libsdl2-2.0-0 zlib1g libpng16-16`.

GitHub requires you to sign in to download workflow artifacts. Downloads are
retained for 30 days. The source for a build is the commit shown on its workflow
run; use that commit when reporting bugs or obtaining the corresponding source.
The included COPYING, COPYRIGHT, and licenses files apply to the binaries.

## Updating this branch

Pushes to `dev-hollywood-builds` trigger only these two build jobs. This workflow
does not change CI on the original development or PR branch. To include later
engine fixes, merge the development branch into this branch and push it;
preserve the Hollywood-only workflow if there is a CI merge conflict.

The workflow also accepts `workflow_dispatch` for explicitly requested builds.
Windows uses the existing ScummVM project generator with a small, pinned vcpkg
dependency set. Linux uses the existing configure/Makefile build. Both embed
ScummVM's built-in resources in the executable.
