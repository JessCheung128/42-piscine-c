#!/bin/sh
ifconfig | grep "ether" | tr -d " \t\r" | sed "s/ether//g"
