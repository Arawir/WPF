QT += core widgets 
requires(qtConfig(combobox))

HEADERS       = card.hh
                
SOURCES       = card.cpp main.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/network/fortuneclient
INSTALLS += target
