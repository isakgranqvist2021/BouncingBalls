SFML_DIRECTORY="/usr/local/Cellar/sfml/2.5.1_1"

g++ main.cpp \
-I "${SFML_DIRECTORY}/include"                  \
-o bin/game                                     \
-L "${SFML_DIRECTORY}/lib"                      \
-l sfml-graphics -l sfml-window -l sfml-system

./game