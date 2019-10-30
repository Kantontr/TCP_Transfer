#ifndef INSTALL_H
#define INSTALL_H

#include "utility.h"

bool install(){



#ifdef __unix__


#elif defined(_WIN32) || defined(WIN32)

    std::cout<<"Starting installer!"<<std::endl;
    initialize_values();

    if ((GetFileAttributesA(path_main_folder.c_str())) == INVALID_FILE_ATTRIBUTES) {

        if ((GetFileAttributesA(path_appdata_instal.c_str())) == INVALID_FILE_ATTRIBUTES) {
            CreateDirectoryA(path_appdata_instal.c_str(), 0);
            std::cout << "Folder KantonLPM zostal utworzony w " << path_appdata_instal << std::endl;
        }

        CreateDirectoryA(path_main_folder.c_str(), 0);
        std::cout << "Folder File_Transfer zostal utworzony w " << path_main_folder << std::endl;

        CreateDirectoryA(path_bin.c_str(), 0);
        std::cout << "Folder bin zostal utworzony w " << path_bin << std::endl;

        CreateDirectoryA(path_users.c_str(), 0);
        std::cout << "Folder users zostal utworzony w " << path_users << std::endl;

        CreateDirectoryA(path_config.c_str(), 0);
        std::cout << "Folder config zostal utworzony w " << path_config << std::endl;

    }
    return true;


#endif



}


#endif // INSTALL_H
