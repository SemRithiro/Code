#!/bin/bash/
# Author : Sem Rithiro
# Copy Right (c) by Sem Rithiro

echo "Changing dock animate. Do you want to make change? 'Y|N'"

while read answer do
	if[ $answer = 'Y' ] then
		defaults write com.apple.dock autohide-time-modifier -int 0;killall Dock
		defaults write com.apple.dock autohide-time-modifier -float 0.5;killall Dock
	else if[ $answer = 'N' ] then
		defaults delete com.apple.dock autohide-time-modifier;killall Dock
	else
		echo "Thanks You!"
	fi
done
