function anagram(s) {
  let str1 = s.slice(0, s.length / 2);
  let str2 = s.slice(s.length / 2, s.length);
  if (s.length % 2 !== 0) return -1;
  let array1 = new Array(256).fill(0);
  let array2 = new Array(256).fill(0);
  let counter = 0;
  for (let i = 0; i < str1.length; i++) {
    array1[str1[i].charCodeAt(0) - "a".charCodeAt(0)]++;
  }

  for (let i = 0; i < str2.length; i++) {
    array2[str2[i].charCodeAt(0) - "a".charCodeAt(0)]++;
  }

  for (let i = 0; i < array1.length; i++) {
    if (array1[i] >= array2[i]) {
      counter += array1[i] - array2[i];
      //console.log(array1[i],array2[i])
    } else {
      counter += array2[i] - array1[i];
    }
  }

  return counter / 2;
}
console.log(anagram("aaabbb")); //3
console.log(anagram("ab")); //1
console.log(anagram("abc")); //-1
console.log(anagram("mnop")); //2
console.log(anagram("xyyx")); //0
console.log(anagram("xaxbbbxx")); //1
