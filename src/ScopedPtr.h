//
// Created by XYM on 2021/3/5.
//

#ifndef TRAIN_C_SCOPEDPTR_H
#define TRAIN_C_SCOPEDPTR_H
#import "Entity.h"

class ScopedPtr
{
private:
    Entity* m_Ptr;
public:
    ScopedPtr(Entity* ptr)
            : m_Ptr(ptr)
    {
    }
    ~ScopedPtr()
    {
        delete m_Ptr;
    }
};


#endif //TRAIN_C_SCOPEDPTR_H
