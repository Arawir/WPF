QT += core widgets 
requires(qtConfig(combobox))

HEADERS       = Inc/letter.hh \
                Inc/comline.hh \
                Inc/mailbox.hh
                
SOURCES       = Src/letter.cpp \
                Src/comline.cpp \
                Src/mailbox.cpp \
                Src/main.cpp

release: DESTDIR = Bin
OBJECTS_DIR = .obj        
MOC_DIR = .moc
RCC_DIR = .qrc
UI_DIR = .ui
                
# install
target.path = $$[QT_INSTALL_EXAMPLES]/network/fortuneclient
INSTALLS += target
