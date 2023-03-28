function solution(citations) {
    let result = 0;
    const arr = citations.sort((a, b) => b - a);
    for (let i = 1; i <= arr.length; i++) {
        if (arr.filter((val) => val >= i).length >= i) {
            result = i;
        }
    }
    return result;
}