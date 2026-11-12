#include <iostream>
#include <memory>
#include <string>
#include <unordered_map>
//WARNING small sections were done by vscode autocomplete 
class node{

public:
    virtual ~node() = default;
    virtual void out(std::ostream& os)const = 0;
    virtual double eval(double k )const =0;
    virtual std::unique_ptr<node> diff() const = 0;
};



class NumNode : public node {
private:
    double operand;
    
public:
//~11/11/26 float forcing itself back into a numnode
    explicit NumNode(double temp) : operand(temp) {}
    //~13/11/26 fixed used explicit constructor 
    double eval(double k) const override {
        return operand;
    }
    std::unique_ptr<node> diff() const override {
        return std::make_unique<NumNode>(0.0);
    }
    void out(std::ostream& os) const override{
        os<< operand;
    }
};
class VarNode : public node {
public:
    double eval(double k) const override {
        return k;
    }
    std::unique_ptr<node> diff() const override{
        return std::make_unique<NumNode>(1.0);
    }
    void out(std::ostream& os) const override{
        os<< "x";
    }
};
//12/11/26 need them to be either numnodes or varnodes
class childnode : public node{
    private:
    std::unique_ptr<node> rght;
    std::unique_ptr<node>  lft;
public:

    childnode(std::unique_ptr<node> left,std::unique_ptr<node> right): lft(std::move(left)), rght(std::move(right)){}
    double eval (double k) const override{return lft->eval(k) + rght->eval(k);}
    std::unique_ptr<node> diff() const override{
        return std::make_unique<childnode>(lft->diff(), rght->diff());

    }
    void out(std::ostream& os) const override{
        os<< "(";
        lft->out(os);
        os<< " + ";
        rght->out(os);
        os<< ")";
    }
};