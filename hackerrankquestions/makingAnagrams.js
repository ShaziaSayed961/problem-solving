function makingAnagrams(s1, s2) {
  let array1 = new Array(256).fill(0);
  let array2 = new Array(256).fill(0);
  let counter = 0;
  for (let i = 0; i < s1.length; i++) {
    array1[s1[i].charCodeAt(0) - "a".charCodeAt(0)]++;
  }

  for (let i = 0; i < s2.length; i++) {
    array2[s2[i].charCodeAt(0) - "a".charCodeAt(0)]++;
  }

  for (let i = 0; i < array1.length; i++) {
    if (array1[i] >= array2[i]) {
      counter += array1[i] - array2[i];
      //console.log(array1[i],array2[i])
    } else {
      counter += array2[i] - array1[i];
    }
  }

  return counter;

}
console.log(makingAnagrams("cde","abe"));//4
console.log(makingAnagrams("abc","amnop"));//4