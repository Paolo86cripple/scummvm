# Hollywood-only ScummVM builds

The `dev-hollywood-builds` branch is a snapshot of the Hollywood development
branch, with a separate GitHub Actions workflow for downloadable prereleases.
Only the Hollywood engine and its game detector are compiled into ScummVM;
no other engines, engine plugins, tests, or developer tools are packaged.
Game data is not included. These are unofficial development builds.

## Downloads

Open [the fork's releases](https://github.com/neuromancer/scummvm/releases),
select a Hollywood development prerelease, and download its assets:

- `scummvm-hollywood-win32.zip`: extract the ZIP and run `scummvm.exe`. This is a
  32-bit x86 Windows build, with SDL2, zlib, libpng, and the C++ runtime linked
  statically; no separate library DLLs are required.
- `scummvm-hollywood-linux-x86_64.tar.gz`: extract the archive, which preserves
  the executable permission, and run `./scummvm`.
  Built on Ubuntu 22.04 for x86_64, with system SDL2, zlib, and libpng libraries.
  On Ubuntu 22.04 or newer, install these with
  `sudo apt-get install libsdl2-2.0-0 zlib1g libpng16-16`.

Prerelease downloads are public, require no GitHub sign-in, and are not subject
to the 30-day CI artifact expiry. Older prereleases are kept, not overwritten.
Each prerelease also includes SHA256SUMS and links to its exact source commit
and workflow run. Use that commit when reporting bugs or obtaining the
corresponding source. The included COPYING, COPYRIGHT, and licenses files apply
to the binaries.

The same archives remain available as temporary
[CI artifacts](https://github.com/neuromancer/scummvm/actions/workflows/ci.yml?query=branch%3Adev-hollywood-builds)
for 30 days. These require GitHub sign-in and have an additional ZIP wrapper.

## Updating this branch

Pushes to `dev-hollywood-builds` trigger the two build jobs. After both succeed,
a publishing job creates a prerelease in `neuromancer/scummvm`, tagged
`hollywood-<run number>-<attempt>` at the built commit. Reruns get a new attempt
number, so they do not replace existing releases. Publishing is restricted to
this fork and branch; only the publishing job has repository write permission.

This workflow does not change CI on the original development or PR branch. To
include later engine fixes, merge the development branch into this branch and
push it; preserve the Hollywood-only workflow if there is a CI merge conflict.

The workflow also accepts `workflow_dispatch` for explicitly requested builds.
Windows uses the existing ScummVM project generator with a small, pinned vcpkg
dependency set. Linux uses the existing configure/Makefile build. Both embed
ScummVM's built-in resources in the executable.
