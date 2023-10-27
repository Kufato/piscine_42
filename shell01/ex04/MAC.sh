#!/bin/sh
ifconfig | grep -i ether | cut -c15- | rev | cut -c30- | rev
