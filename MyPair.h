#ifndef MYPAIR__H
#define MYPAIR__H

template<typename FirstType, typename SecondType> class MyPair{
public:
    FirstType getFirst();
    void setFirst(FirstType first);
    SecondType getSecond();
    void setSecond(SecondType second);

private:
    FirstType _first;
    SecondType _second;
};

template<typename FirstType, typename SecondType>
FirstType MyPair<FirstType, SecondType>::getFirst(){
    return _first;
}

template<typename FirstType, typename SecondType>
void MyPair<FirstType, SecondType>::setFirst(FirstType first){
    _first=first;
}

template<typename FirstType, typename SecondType>
SecondType MyPair<FirstType, SecondType>::getSecond(){
    return _second;
}

template<typename FirstType, typename SecondType>
void MyPair<FirstType, SecondType>::setSecond(SecondType second){
    _second=second;
}

#endif