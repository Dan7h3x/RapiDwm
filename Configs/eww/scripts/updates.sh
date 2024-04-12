#!/usr/bin/env bash

updates=$(yay -Qu 2>/dev/null | wc -l)

echo $updates
