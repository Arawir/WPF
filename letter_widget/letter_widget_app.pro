QT += core widgets 
requires(qtConfig(combobox))

HEADERS       = letter.hh
                
SOURCES       = letter.cpp main.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/network/fortuneclient
INSTALLS += target
