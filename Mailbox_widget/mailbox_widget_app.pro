QT += core widgets 
requires(qtConfig(combobox))

HEADERS       = letter.hh comline.hh mailbox.hh
                
SOURCES       = letter.cpp comline.cpp mailbox.cpp main.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/network/fortuneclient
INSTALLS += target
