#!/bin/bash
#develop by: Sem Rithiro
#develop date: 27 - May - 2017

echo Restarting network manager
service network-manager restart
echo Network manager restarted

echo Removing kernel source
apt-get purge bcmwl-kernel-source
echo Kernel source has been removed

echo Getting update
apt-get update
echo Update completed

echo Installing new kernel source
apt-get install bcmwl-kernel-source
echo New kernel source has been installed

echo Restarting network manager   
service network-manager restart
echo Network manager restarted
