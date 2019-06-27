#ifndef FOODCOMPONENT_H
#define FOODCOMPONENT_H


class FoodComponent
{
public:
    FoodComponent();
    virtual void AddFood() = 0;
    virtual void UpdateFood() = 0;
    virtual void DeleteFood() = 0;
};

#endif // FOODCOMPONENT_H
