function repeatedString(s, n) {
  let noOfRepeatedString=Math.floor(n/s.length)
  let remainder=n%s.length
  let counterOfA=0
  for(let i=0;i<s.length;i++){
    if(s[i]==="a"){
      counterOfA++
    }
  }
  let slicedString=s.slice(0,remainder)
  let counterOfAOfSlicedString=0
  for(let i=0;i<slicedString.length;i++){
    if(s[i]==="a"){
      counterOfAOfSlicedString++
    }
  }
  
  
  return counterOfA*noOfRepeatedString+counterOfAOfSlicedString
}
console.log(repeatedString("abcac", 10));//4
console.log(repeatedString("aba", 10));//7
console.log(repeatedString("a",1000000000000));//1000000000000
//console.log(repeatedString(s, n));