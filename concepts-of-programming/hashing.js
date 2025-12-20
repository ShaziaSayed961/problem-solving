//basic hashing 
let num=[1,2,3,1,3,4]
let array = new Array(6).fill(0)
for(let i=0;i<num.length;i++){
  array[num[i]]++
}
console.log(array)


//string hashing 
let str="avsdfgreavsd"
let array1 = new Array(256).fill(0)
for(let i=0;i<str.length;i++){
  array1[str[i].charCodeAt(0)-"a".charCodeAt(0)]++
}
console.log(array1)


//hashing using objects 
let arr=[1,2,3,2,1,2,1,2,4,5,4,5,6]
  const counts = {};
  arr.forEach(el => counts[el] = counts[el] ? counts[el] + 1 : 1)
  console.log(counts)