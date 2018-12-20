
//Returns the index of a given value in an array without using indexOf()
function getIndex (array, value) {
	var isFound= 0;
    for (var i=0; i< array.length; i++){
		if (array[i]== value){
            document.write (i, " ")
            isFound= 1;
		}  
	}
    if (isFound==0){
    	document.write("Value not found")
    }
    return 0; 
}
