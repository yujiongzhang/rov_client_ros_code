#include "joy_linux.h"

int xbox_open(const char *file_name)  
{  
    int xbox_fd;  

    xbox_fd = open(file_name, O_RDONLY);  
    if (xbox_fd < 0)  
    {  
        perror("open");  
        return -1;  
    }  

    return xbox_fd;  
}  

int xbox_map_read(int xbox_fd, xbox_map_t *map)  
{  
    int len, type, number, value;  
    struct js_event js;  

    len = read(xbox_fd, &js, sizeof(struct js_event));  
    if (len < 0)  
    {  
        perror("read");  
        return -1;  
    }  

    type = js.type;  
    number = js.number;  
    value = js.value;  

    map->time = js.time;  

    if (type == JS_EVENT_BUTTON)  
    {  
        switch (number)  
        {  
            case XBOX_BUTTON_A:  
                map->a = value;  
                break;  

            case XBOX_BUTTON_B:  
                map->b = value;  
                break;  

            case XBOX_BUTTON_X:  
                map->x = value;  
                break;  

            case XBOX_BUTTON_Y:  
                map->y = value;  
                break;  

            case XBOX_BUTTON_LB:  
                map->lb = value;  
                break;  

            case XBOX_BUTTON_RB:  
                map->rb = value;  
                break;  

            case XBOX_BUTTON_START:  
                map->start = value;  
                break;  

            case XBOX_BUTTON_BACK:  
                map->back = value;  
                break;  

            case XBOX_BUTTON_HOME:  
                map->home = value;  
                break;  

            case XBOX_BUTTON_LO:  
                map->lo = value;  
                break;  

            case XBOX_BUTTON_RO:  
                map->ro = value;  
                break;  

            default:  
                break;  
        }  
    }  
    else if (type == JS_EVENT_AXIS)  
    {  
        switch(number)  
        {  
            case XBOX_AXIS_LX:  
                map->lx = value;  
                break;  

            case XBOX_AXIS_LY:  
                map->ly = value;  
                break;  

            case XBOX_AXIS_RX:  
                map->rx = value;  
                break;  

            case XBOX_AXIS_RY:  
                map->ry = value;  
                break;  

            case XBOX_AXIS_LT:  
                map->lt = value;  
                break;  

            case XBOX_AXIS_RT:  
                map->rt = value;  
                break;  

            case XBOX_AXIS_XX:  
                map->xx = value;  
                break;  

            case XBOX_AXIS_YY:  
                map->yy = value;  
                break;  

            default:  
                break;  
        }  
    }  
    else  
    {  
        /* Init do nothing */  
    }  

    return len;  
}  

void xbox_close(int xbox_fd)  
{  
    close(xbox_fd);  
    return;  
}