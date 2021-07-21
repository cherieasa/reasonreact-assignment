type colorsquare = {
    id: int,
    color: string,
};

type state = {colorsquares: array(colorsquare)};

/* function to generate random color */
let randomColorGenerator = () => {
    let color = ref("#");
    let possiblechars = "0123456789ABCDEF";

    /* append 6 randomly selected possible chars to color */
    for (i in 0 to 6){
        print_int(i);
        /* randomly select index */
        let select_char = possiblechars.[Random.int(16)];
        let select_str = String.make(1, select_char);
        color := color^ ++ select_str;
    };

    color;
};

[@react.component]
let make = () =>
<div>
    {ReasonReact.string("Color code: " ++ randomColorGenerator().contents)}
</div>;