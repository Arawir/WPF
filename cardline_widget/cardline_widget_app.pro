QT += core widgets 
requires(qtConfig(combobox))

HEADERS       = card.hh panel.hh
                
SOURCES       = card.cpp panel.cpp main.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/network/fortuneclient
INSTALLS += target
