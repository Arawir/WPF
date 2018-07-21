QT += core widgets 
requires(qtConfig(combobox))

HEADERS       = card.hh panel.hh preview.hh cardline.hh deck.hh
                
SOURCES       = card.cpp panel.cpp preview.cpp cardline.cpp deck.cpp main.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/network/fortuneclient
INSTALLS += target
