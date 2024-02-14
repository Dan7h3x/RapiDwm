#!/usr/bin/env bash
# Layoutmenu script for dmenu

choice=$(cat <<EOF | dmenu -fn "JetBrainsMono Nerd Font:size=18"
[\\] Dwindle
|M| Centered
><> Floating
[]= Tiled
||| Columns
>M> CFM
[M] Monocle
[D] Deck
TTT Bstack
=== BstrackHoriz
HHH Grid
--- HorizGrid
::: GaplesGrid
### NrowGrid
(@) Spiral
|+| Tatami
EOF)
case $choice in
'[]= Tiled')
	printf 0
	;;
'><> Floating')
	printf 1
	;;
'[M] Monocle')
	printf 2
	;;
'TTT Bstack')
	printf 3
	;;
'=== BstrackHoriz')
	printf 4
	;;
'|M| Centered')
	printf 5
	;;
'>M> CFM')
	printf 6
	;; 
'||| Columns')
	printf 7
	;;
'[D] Deck')
	printf 8
	;;
'(@) Spiral')
	printf 9
	;;
'[\\] Dwindle')
	printf 10
	;;
'(@) Spiral')
	printf 11
	;;
'HHH Grid')
	printf 12
	;;
  '--- HorizGrid')
  printf 13
  ;;
  '::: GaplesGrid')
  printf 14
  ;;
  '### NrowGrid')
  printf 15
  ;;
esac
