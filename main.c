#include "flecs.h"

int main(int argc, char *argv[]) {
    ecs_world_t *world = ecs_init();

    return ecs_fini(world);
}
