
//Removes vowels from a sentence using <= 2 conditional statements
function remove_vowels (sentence){
    var novowels= "";
    for (var i=0; i< sentence.length; i++){
        if (sentence[i]== 'A'|| sentence[i]== 'a' ||sentence[i]== 'E'||sentence[i]== 'e'||sentence[i]== 'I'||sentence[i]== 'i'||sentence[i]== 'O'||sentence[i]== 'o'||sentence[i]== 'U'||sentence[i]== 'u'){
            novowels+= "";
        }
        else {
            novowels+= s[i];
        }
    }
    return novowels;
}
