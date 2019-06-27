#ifndef USERCONTROLL_H
#define USERCONTROLL_H


class UserControll
{
public:
    UserControll();
    virtual void AddUser() = 0;
    virtual void UpdateUser() =0 ;
    virtual void DelteUser() = 0;

};

#endif // USERCONTROLL_H
