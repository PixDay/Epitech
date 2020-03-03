#!/bin/bash
#

grep -i -w 'theo1\|steven1\|arnaud1\|pierre-jean' |  sed 's/theo1/Wile E. Coyote/' | sed 's/steven1/Daffy Duck/' | sed 's/arnaud1/Porky Pig/' | sed 's/pierre-jean/Marvin the Martian/'