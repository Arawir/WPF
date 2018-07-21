QT += core widgets 
requires(qtConfig(combobox))

HEADERS       = Inc/card.hh \
                Inc/panel.hh \
                Inc/preview.hh \
                Inc/cardline.hh \
                Inc/deck.hh 
                
SOURCES       = Src/card.cpp \
                Src/panel.cpp \
                Src/preview.cpp \
                Src/cardline.cpp \
                Src/deck.cpp \
                Src/main.cpp

release: DESTDIR = Bin
OBJECTS_DIR = .obj        
MOC_DIR = .moc
RCC_DIR = .qrc
UI_DIR = .ui


# install
target.path = $$[QT_INSTALL_EXAMPLES]/network/fortuneclient
INSTALLS += target
