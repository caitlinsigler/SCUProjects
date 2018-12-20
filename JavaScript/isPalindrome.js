
//Determines whether a word is a palindrome without using the reverse function
function palindrome(s) {
  var counter=0;
  for (var i = s.length - 1; i >= 0; i--){
    if (s[counter]== s[i]){
			counter++;
		}
		else{
			return false;
		}
	}
		return true;
}
