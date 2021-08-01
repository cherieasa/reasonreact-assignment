type colorsquare = {
    id: int,
    color: string,
};

type state = {colorsquares: array(colorsquare)};

let initialiseColor = () => {
    let color_array = [];
    let combined = [];
    let color = ref("#");
    let possiblechars = "0123456789ABCDEF";

    /* want 9 colors */
    for (i in 0 to 9){

        /* append 6 randomly selected possible chars to color */
        for (i in 0 to 5){
            print_int(i);
            /* randomly select index from 0-15 */
            let select_char = possiblechars.[Random.int(16)];
            let select_str = String.make(1, select_char);
            color := color^ ++ select_str;
        };
        let color_array = [color^];
        let combined = Array.Append(combined, [color^]);
    }
    combined;
};

[@react.component]
let make = () => {
    let (hex, setHex) = React.useState(_ => initialiseColor());
    let (pressed, isPressed) = React.useState(_ => false);

    /* function to generate random color */
    let randomColorGenerator = (hex) => {
        let color = initialiseColor()
        setHex(hex => color);
        color;
    };

    let buttonPress = (pressed) => {
        let pressed = !pressed;
        pressed;
    };
/* 
    React.useEffect1(() => {
        None
    }, [|hex|]); */

    /* let make = (~hex) => {
        React.useEffect1(() => {
            setHex(_ => hex);
            None
        }, [|hex|]);
    }; */

    /* React.useEffect1(
        () => {
          /* setHex(hex => randomColorGenerator(hex)); */
          setHex(_ => hex);
          None
        },
        [|hex|],
    ); */

    <div>
        <div style=(ReactDOM.Style.make(~backgroundColor=hex[0], ~height="80px", ~width="80px", ()))/>
        <div>{React.string(hex)}</div>
        <div style=(ReactDOM.Style.make(~backgroundColor=hex[1], ~height="80px", ~width="80px", ()))/>
        <div>{React.string(hex)}</div>
        <div style=(ReactDOM.Style.make(~backgroundColor=hex[2], ~height="80px", ~width="80px", ()))/>
        <div>{React.string(hex)}</div>
        <div style=(ReactDOM.Style.make(~backgroundColor=hex[3], ~height="80px", ~width="80px", ()))/>
        <div>{React.string(hex)}</div>
        /* <button onClick={_ => isPressed(pressed => buttonPress(pressed))}>{React.string("Randomise")}</button> */
        <button onClick={_ => setHex(hex => randomColorGenerator(hex))}>{React.string("Randomise")}</button>
    </div>;
}
