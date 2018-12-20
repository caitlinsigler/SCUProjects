
//Returns the distance between two numbers (imagine a number line) without using the Math.abs() function

function distance(a, b){
    if ((a-b)>=0){
        return a-b;
    }
    else{
        return b-a;
    }
}
