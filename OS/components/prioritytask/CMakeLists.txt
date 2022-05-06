idf_component_register(SRCS "prioritytask.c"
                       INCLUDE_DIRS "include"
                       REQUIRES driver
                       REQUIRES freertos
                       REQUIRES nvs_flash
                       )