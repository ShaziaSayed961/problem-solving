function anagram(s) {
let str=s.slice(0,s.length/2)
let str2=s.slice(s.length/2,s.length)
if(s.length%2!==0) return -1

return str
}
console.log(anagram("aaabbb"));//3
console.log(anagram("ab"));//1
console.log(anagram("abc"));//-1
console.log(anagram("mnop"));//2
console.log(anagram("xyyx"));//0
console.log(anagram("xaxbbbxx"));//1