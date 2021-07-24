type colorsquare = {
    id: int,
    color: string,
};

type state = {colorsquares: array(colorsquare)};

let initialiseColor = () => {
    let color = ref("#");
    let possiblechars = "0123456789ABCDEF";

    /* append 6 randomly selected possible chars to color */
    for (i in 0 to 5){
        print_int(i);
        /* randomly select index from 0-15 */
        let select_char = possiblechars.[Random.int(16)];
        let select_str = String.make(1, select_char);
        color := color^ ++ select_str;
    };
    color^;
};


[@react.component]
let make = () => {
    let hexColor = React.useRef(initialiseColor());

    React.useEffect1(
        () => {
            hexColor.current = initialiseColor();
          None
        },
        [|hexColor.current|],
    );

    <div>
        <div style=(ReactDOM.Style.make(~backgroundColor=hexColor.current, ~height="80px", ~width="80px", ()))/>
        <div>{React.string({hexColor.current})}</div>
        <button onClick={_ => hexColor.current = initialiseColor()}>{React.string("Randomise")}</button>
    </div>;
}
