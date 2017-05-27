#!/bin/bash
#developer: Sem Rithiro
#developed date: 27 - May - 2017

echo Setting hibernatemode to 0...
pmset -a hibernatemode 0
sleep 0.2
echo Hibernatemode has been set to 0
sleep 0.2

echo Removing sleepimage...
rm /private/var/vm/sleepimage
sleep 0.2
echo Sleepimage has been removed
sleep 0.2

echo Making new sleepimage...
touch /private/var/vm/sleepimage
sleep 0.2
echo New sleepimage has been made
sleep 0.2

echo Giving permission to sleepimage...
chmod 000 /private/var/vm/sleepimage
sleep 0.2
echo Permission set
sleep 0.2

echo Restoring hibernatemode to 3...
pmset -a hibernatemode 3
sleep 0.2
echo Hibernatemode has been restored
sleep 0.2

cd /System/Library/Speech/
echo Removing Voices
rm -rf Voices/*
sleep 0.2
echo Voices has been removed
sleep 0.2

echo Removing log
rm -rf /private/var/log/*
sleep 0.2
echo Log has been removed
sleep 0.2

echo Removing TM
cd /private/var/tmp/; rm -rf TM*
sleep 0.2
echo TM has been removed
sleep 0.2

echo Removing caches
cd ~/Library/Caches/; rm -rf ~/Library/Caches/*
sleep 0.2
echo Caches has been removed
