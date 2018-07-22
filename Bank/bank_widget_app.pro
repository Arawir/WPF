QT += core widgets 
requires(qtConfig(combobox))

HEADERS       = Inc/gold.hh \
                Inc/goldline.hh 
                
                
SOURCES       = Src/gold.cpp \
                Src/goldline.cpp \
                Src/main.cpp

release: DESTDIR = Bin
OBJECTS_DIR = .obj        
MOC_DIR = .moc
RCC_DIR = .qrc
UI_DIR = .ui


# install
target.path = $$[QT_INSTALL_EXAMPLES]/network/fortuneclient
INSTALLS += target
