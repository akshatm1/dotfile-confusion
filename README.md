# Dotfiles for Arch Linux(Hyprland)

## Gallery
![Workspace 1](assets/screenshot1.png)
![Workspace 2](assets/screenshot2.png)
![Workspace 3](assets/screenshot3.png)
![Workspace 4](assets/screenshot4.png)


## Required packages
- Hyprland (duh)
- Hyprpaper (For Wallpaper)
- Kitty (Terminal)
- Fastfetch (For flexing)
- Btop/Htop (Optional, but you will need it)
- Wofi (So you don't need to run apps from the terminal)
- FiraCode Nerd Font, JetBrains Nerd Font, Awesome Font (Those are fonts, no need for thanking)
- NetworkManager (For, you know, networking)
- Pipewire and alsa-utils (So the volume button works)
- Yay (AUR, to install some of the packages not available)

## How to install the required packagse

First, you need to install Git:

```
sudo pacman -Sy git
```

Before the packages, you would need to install Yay(Yet another yogurt, weird name, I know):

```
git clone https://aur.archlinux.org/yay.git ~/ && cd ~/yay && makepkg -si
```

Now you can install the packages:

```
yay -S --needed hyprland hyprpaper kitty fastfetch btop htop wofi ttf-firacode-nerd ttf-jetbrains-mono-nerd otf-font-awesome networkmanager pipewire pipewire-audio pipewire-pulse wireplumber pipewire-alsa alsa-utils
```

## How to beautify your setup

Now, before we begin, **READ THIS FIRST:** Backup your whole ``.config/`` directory before moving on as you could mess up files copying blindly or worse, destroy your own dotfiles if you have one:

```
cp -r ~/.config/ ~/.config_bak/
```

Then, moving on, clone this github repo:

```
git clone https://github.com/akshatm1/arch-dotfiles-v2/ ~/
```

After doing that, just copy and dump the whole thing into your ``.config/`` directory(Since I don't anything about those flashy ML4W stuff as it never worked for me):

```
cp -r ~/arch-dotfiles-v2/* ~/.config/
```

Then pray it works as you type ```start-hyprland``` in the TTY that it works and some font isn't missing as I'm not a regular at doing this stuff.

