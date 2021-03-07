//
// Created by XYM on 2021/3/5.
//

#ifndef TRAIN_C_SCOPEDPTR_H
#define TRAIN_C_SCOPEDPTR_H
#import "Entity.h"

class ScopedPtr
{
private:
    Entity* m_Obj;
public:
    explicit ScopedPtr(Entity* ptr)
            : m_Obj(ptr)
    {
    }
    ~ScopedPtr()
    {
        delete m_Obj;
    }

    Entity* operator->() const{
        return m_Obj;
    }
};


#endif //TRAIN_C_SCOPEDPTR_H
