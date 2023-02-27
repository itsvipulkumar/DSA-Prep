var addDigits = function (num) {


    const myfun = (nums) => {
        let add = 0;
        nums = nums.toString();
        for (let num = 0; num < nums.length; num++) {


            let n = parseInt(nums[num]);
            add = add + n

        }
        // console.log(add);
        return add;

    }

    while (num > 9) {

        num = myfun(num)
    }
    return num;

};

const nums = "381";
console.log(addDigits(nums));
