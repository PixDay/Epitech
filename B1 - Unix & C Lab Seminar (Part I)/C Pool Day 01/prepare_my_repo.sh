#!/bin/bash
blih -u adrien.colombier@epitech.eu repository create $1;
blih -u adrien.colombier@epitech.eu repository setacl $1 ramassage-tek r
blih -u adrien.colombier@epitech.eu repository getacl $1
