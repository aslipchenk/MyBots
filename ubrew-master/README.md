Ucode Homebrew
===========

This script installs Homebrew properly in your home directory on your ucode session.

Moves temporary Homebrew data (`Temp` and `Cache`) to `/tmp`, leaving your home directory cleaner.

Install
-------
Run script from your terminal:

```
zsh install.sh
```

And reopen terminal.

How it works
------------
This script removes your current Homebrew installation in your home if any, and reinstalls it properly from the Homebrew Github repo.

Then it simply creates a `.brewconfig.zsh` script in your home directory, and modifies your `.zshrc` to source the script.

It is simple to remove, and you can re-run it multiple times without duplication.


Uninstall
---------
Simply remove these lines from your `.zshrc`

```sh
# Load Homebrew Fix script
source $HOME/.brewconfig.zsh
```

And delete `.brewconfig.zsh` in your home directory.
