module Color = {

    let initialiseColor = () => {
        let color = ref("#");
        let possiblechars = "0123456789ABCDEF";

        /* append 6 randomly selected possible chars to color */
        for (i in 0 to 5){
            print_int(i);
            let floor = Js.Math.floor(Js.Math.random()*. 16.0);

            /* randomly select index from 0-15 */
            let select_char = possiblechars.[floor];
            /* Convert char to string */
            let select_str = String.make(1, select_char);
            color := color^ ++ select_str;
        };
        color^;
    }
};