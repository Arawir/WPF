QT += core widgets 
requires(qtConfig(combobox))

HEADERS       = letter.hh comline.hh
                
SOURCES       = letter.cpp comline.cpp main.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/network/fortuneclient
INSTALLS += target
