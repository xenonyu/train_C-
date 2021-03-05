//
// Created by XYM on 2021/3/6.
//

#ifndef TRAIN_C_ENTITY2_H
#define TRAIN_C_ENTITY2_H

#endif //TRAIN_C_ENTITY2_H
/**
 * 测试this
 */
class Entity2;
void PrintEntity2(Entity2* entity);
class Entity2{
public:
    int X, Y;
    Entity2(int x, int y)
            : X(x), Y(x)
    {
        PrintEntity2(this);
    }
    int GetX() const{
        const Entity2* e = this;
        return e->X;
    }
};
void PrintEntity2(Entity2* entity){
    std::cout << entity->X << entity->Y;
}