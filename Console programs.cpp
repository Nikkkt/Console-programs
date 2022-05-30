#include <iostream>
#include <windows.h>
using namespace std;

int random(int min, int max) {
    srand(time(NULL));
    int num = min + rand() % (max - min + 1);
    return num;
}

int main()
{
    setlocale(0, "");

    //TASK 1
    double weight, growth, ideal_weight;
    char gender;
    
    cout << "Введите свой пол (В формате M или F): ";
    cin >> gender;
    cout << "Введите свой вес в кг: ";
    cin >> weight;
    cout << "Введите свой рост в см: ";
    cin >> growth;
    
    if (gender == 'M' || gender == 'm') {
    
        ideal_weight = growth - 100;
    
        if (weight == ideal_weight) {
            cout << "У вас идеальный вес" << endl;
        }
        else if (weight - ideal_weight > 0) {
            cout << "Вам нужно сбросить " << weight - ideal_weight << " кг" << endl;
        }
        else {
            cout << "Вам нужно набрать " << ideal_weight - weight << " кг" << endl;
        }
    }
    else if (gender == 'F' || gender == 'f') {
    
        ideal_weight = growth - 110;
    
        if (weight == ideal_weight) {
            cout << "У вас идеальный вес" << endl;
        }
        else if (weight - ideal_weight > 0) {
            cout << "Вам нужно сбросить " << weight - ideal_weight << " кг" << endl;
        }
        else {
            cout << "Вам нужно набрать " << ideal_weight - weight << " кг" << endl;
        }
    }
    else {
        cout << "Для меня это неизвестный гендер" << endl;
    }

    //TASK 2
    int birthday_day, birthday_month;
    char full_stop;
    string predictions[] = 
    {"Дел окажется больше, чем вы ожидали. Начинать день стоит с самого важного; такой подход позволит избежать многих переживаний и волнений.",
    "Не стоит торопиться. Утро едва ли подойдет для важных дел и серьезных решений. Скорее всего, вам потребуется время, чтобы собраться с мыслями, настроиться на нужный лад.",
    "В начале дня может быть сложно сохранять спокойствие. Это время будет довольно напряженным, особенно для тех, кто запланировал поездки, важные встречи, участие в каких-то общественных мероприятиях.",
    "Проявите настойчивость, и вы добьетесь многого. Выбирая, на чем сосредоточиться сегодня, полагайтесь на интуицию; занимайтесь тем, что вызывает неподдельный интерес.",
    "Если у вас большие планы на этот день, будьте готовы действовать самостоятельно. Даже проверенным союзникам сегодня едва ли удастся помочь вам, а вот невольно создать проблемы они могут.",
    "Не спешите. Первую половину дня стоит провести спокойно, по возможности избегая общения с людьми, которые часто выводят вас из равновесия, заставляют переживать.",
    "Многие вопросы сегодня решатся быстрее и проще, чем можно было ожидать. А все потому, что вы по-новому взглянете на то, что прежде казалось привычным и совершенно естественным.",
    "Смотрите на вещи реалистично. Сегодня многое будет казаться возможным, но если вы не будете излишне оптимистичны, то быстро поймете, в чем добьетесь успеха и где могут возникнуть проблемы.",
    "Любые важные встречи стоит планировать на первую половину дня. Именно в это время вам будет особенно легко ладить и с близкими людьми, и с новыми знакомыми.",
    "Никуда не торопитесь. Этот день хорошо подойдет для того, чтобы наводить порядок в делах, решать вопросы, давно требовавшие внимания, заниматься тем, до чего долго не доходили руки.",
    "День едва ли обойдется без волнений, но вы не потеряете головы. Очень полезным окажется опыт, полученный раньше: благодаря ему вы не станете рисковать там, где этого можно избежать, примете взвешенные решения.",
    "День подойдет для решения многих серьезных вопросов. Вы ничего не упустите из виду, обратите внимание на важные детали, тщательно обдумаете каждый шаг."};
    
    cout << "Введите день и месяц своего рождения (в формате ДД.ММ): ";
    cin >> birthday_day >> full_stop >> birthday_month;
    
    if (birthday_day < 1 || birthday_day > 31 || birthday_month < 1 || birthday_month > 12 || full_stop != '.') {
        cout << "Дата введена некорректно" << endl;
    }
    else {
        if ((birthday_day >= 21 && birthday_month == 3) || (birthday_day <= 20 && birthday_month == 4)) {
            cout << "Вы Овен. Ваше предсказание: " << predictions[random(0, 11)] << endl;
        }
        else if ((birthday_day >= 21 && birthday_month == 4) || (birthday_day <= 20 && birthday_month == 5)) {
            cout << "Вы Телец. Ваше предсказание: " << predictions[random(0, 11)] << endl;
        }
        else if ((birthday_day >= 21 && birthday_month == 5) || (birthday_day <= 20 && birthday_month == 6)) {
            cout << "Вы Близнецы. Ваше предсказание: " << predictions[random(0, 11)] << endl;
        }
        else if ((birthday_day >= 21 && birthday_month == 6) || (birthday_day <= 22 && birthday_month == 7)) {
            cout << "Вы Рак. Ваше предсказание: " << predictions[random(0, 11)] << endl;
        }
        else if ((birthday_day >= 23 && birthday_month == 7) || (birthday_day <= 22 && birthday_month == 8)) {
            cout << "Вы Лев. Ваше предсказание: " << predictions[random(0, 11)] << endl;
        }
        else if ((birthday_day >= 23 && birthday_month == 8) || (birthday_day <= 22 && birthday_month == 9)) {
            cout << "Вы Дева. Ваше предсказание: " << predictions[random(0, 11)] << endl;
        }
        else if ((birthday_day >= 23 && birthday_month == 9) || (birthday_day <= 22 && birthday_month == 10)) {
            cout << "Вы Весы. Ваше предсказание: " << predictions[random(0, 11)] << endl;
        }
        else if ((birthday_day >= 23 && birthday_month == 10) || (birthday_day <= 22 && birthday_month == 11)) {
            cout << "Вы Скорпион. Ваше предсказание: " << predictions[random(0, 11)] << endl;
        }
        else if ((birthday_day >= 23 && birthday_month == 11) || (birthday_day <= 21 && birthday_month == 12)) {
            cout << "Вы Стрелец. Ваше предсказание: " << predictions[random(0, 11)] << endl;
        }
        else if ((birthday_day >= 22 && birthday_month == 12) || (birthday_day <= 19 && birthday_month == 1)) {
            cout << "Вы Козерог. Ваше предсказание: " << predictions[random(0, 11)] << endl;
        }
        else if ((birthday_day >= 20 && birthday_month == 1) || (birthday_day <= 19 && birthday_month == 2)) {
            cout << "Вы Водолей. Ваше предсказание: " << predictions[random(0, 11)] << endl;
        }
        else if ((birthday_day >= 20 && birthday_month == 2) || (birthday_day <= 20 && birthday_month == 3)) {
            cout << "Вы Рыбы. Ваше предсказание: " << predictions[random(0, 11)] << endl;
        }
        else {
            cout << "Кажется, с датой все-таки что-то не так" << endl;
        }
    }

    //TASK 3
    SYSTEMTIME t;
    GetLocalTime(&t);
    int day, month, year;
    char dot;
    
    cout << "Введите сегодняшнюю дату в формате ДД.ММ.ГГГГ: " << endl;
    cin >> day >> dot >> month >> dot >> year;

    if (dot != '.' || day < 1 || day > 31 || month < 1 || month > 12) {
        cout << "Неправильно введенная дата" << endl;
    }
    else {
        if (day == t.wDay && month == t.wMonth && year == t.wYear) {
            cout << "Дата соответствует реальности" << endl;
    
            if (t.wDay == 31 && (t.wMonth == 1 || t.wMonth == 3 || t.wMonth == 5 || t.wMonth == 7 || t.wMonth == 8 || t.wMonth == 10)) {
                cout << "Завтра будет " << "01." << t.wMonth + 1 << "." << t.wYear << endl;
            }
            else if (t.wDay == 30 && (t.wMonth == 4 || t.wMonth == 6 || t.wMonth == 9 || t.wMonth == 11)) {
                cout << "Завтра будет " << "01." << t.wMonth + 1 << "." << t.wYear << endl;
            }
            else if (t.wDay == 28 && t.wMonth == 2) {
    
                if (t.wYear % 4 == 0 && t.wDay == 29) {
                    cout << "Завтра будет " << "01." << t.wMonth + 1 << "." << t.wYear << endl;
                }
                else if (t.wYear % 4 != 0 && t.wDay == 28) {
                    cout << "Завтра будет " << "01." << t.wMonth + 1 << "." << t.wYear << endl;
                }
            }
            else if (t.wDay == 31 && t.wMonth == 12) {
                cout << "Завтра будет " << "01." << t.wMonth + 1 << "." << t.wYear + 1 << endl;
            }
            else {
                cout << "Завтра будет " << t.wDay + 1 << "." << t.wMonth << "." << t.wYear << endl;
            }
        }
    
        else {
            cout << "Дата не соответствует реальности" << endl;
    
            if (t.wDay == 31 && (t.wMonth == 1 || t.wMonth == 3 || t.wMonth == 5 || t.wMonth == 7 || t.wMonth == 8 || t.wMonth == 10)) {
                cout << "Завтра будет " << "01." << t.wMonth + 1 << "." << t.wYear << endl;
            }
            else if (t.wDay == 30 && (t.wMonth == 4 || t.wMonth == 6 || t.wMonth == 9 || t.wMonth == 11)) {
                cout << "Завтра будет " << "01." << t.wMonth + 1 << "." << t.wYear << endl;
            }
            else if (t.wDay == 28 && t.wMonth == 2) {
    
                if (t.wYear % 4 == 0 && t.wDay == 29) {
                    cout << "Завтра будет " << "01." << t.wMonth + 1 << "." << t.wYear << endl;
                }
                else if (t.wYear % 4 != 0 && t.wDay == 28) {
                    cout << "Завтра будет " << "01." << t.wMonth + 1 << "." << t.wYear << endl;
                }
            }
            else if (t.wDay == 31 && t.wMonth == 12) {
                cout << "Завтра будет " << "01." << t.wMonth + 1 << "." << t.wYear + 1 << endl;
            }
            else {
                cout << "Завтра будет " << t.wDay + 1 << "." << t.wMonth << "." << t.wYear << endl;
            }
        }
    }

    //TASK 4
    int money = 0, const_money, answer1, answer2, answer3, answer4, answer5, answer6, answer7, answer8, answer9, answer10, i = 0;
    string questions[] = 
    {"Какое из животных насекомоядное?\n 1) белка\n 2) крот\n 3) лиса\n 4) волк\n",
    "Какая нить в природе самая тонкая?\n 1) шелк\n 2) шерсть\n 3) паутина\n 4) лен\n",
    "Сколько месяцев в году?\n 1) 6\n 2) 12\n 3) 11\n 4) 10\n",
    "Что хотел получить Железный дровосек?\n 1) сердце\n 2) топор\n 3) ум\n 4) деньги\n",
    "Какая из единиц измерения здесь лишняя?\n 1) секунда\n 2) метр\n 3) ньютон\n 4) час\n",
    "Найдите число, которое делится на 8 без остатка?\n 1) 65\n 2) 39\n 3) 57\n 4) 32\n",
    "Что является результатом вычитания?\n 1) частное\n 2) сумма\n 3) вычитаемое\n 4) разность\n",
    "Профессия человека, прислуживающего за столом?\n 1) директор\n 2) повар\n 3) учитель\n 4) официант\n",
    "Какое животное вылезает из кожи вон?\n 1) крокодил\n 2) ящерица\n 3) змея\n 4) дельфин\n",
    "Сколько в одном метре сантиметров?\n 1) 100\n 2) 10\n 3) 1000\n 4) 1\n"};

    cout << questions[i];
    cout << "Ваш ответ: ";
    cin >> answer1;
    if (answer1 == 2) {
        i++;
        money = 1000;
        cout << "Это правильный ответ. Вы получили 1000 грн! Следующий вопрос:" << endl;
        cout << questions[i];
        cout << "Ваш ответ: ";
        cin >> answer2;
        if (answer2 == 3) {
            i++;
            money = money - money + 5000;
            cout << "Это правильный ответ. Вы получили 5000 грн! Следующий вопрос:" << endl;
            cout << questions[i];
            cout << "Ваш ответ: ";
            cin >> answer3;
            if (answer3 == 2) {
                i++;
                money = money - money + 10000;
                cout << "Это правильный ответ. Вы получили 10000 грн! Следующий вопрос:" << endl;
                cout << questions[i];
                cout << "Ваш ответ: ";
                cin >> answer4;
                if (answer4 == 1) {
                    i++;
                    money = money - money + 20000;
                    cout << "Это правильный ответ. Вы получили 20000 грн! Следующий вопрос:" << endl;
                    cout << questions[i];
                    cout << "Ваш ответ: ";
                    cin >> answer5;
                    if (answer5 == 4) {
                        i++;
                        money = money - money + 50000;
                        cout << "Это правильный ответ. Вы получили 50000 грн! Следующий вопрос:" << endl;
                        cout << questions[i];
                        cout << "Ваш ответ: ";
                        cin >> answer6;
                        if (answer6 == 4) {
                            i++;
                            money = money - money + 100000;
                            cout << "Это правильный ответ. Вы получили 100000 грн! Следующий вопрос:" << endl;
                            cout << questions[i];
                            cout << "Ваш ответ: ";
                            cin >> answer7;
                            if (answer7 == 4) {
                                i++;
                                money = money - money + 250000;
                                cout << "Это правильный ответ. Вы получили 250000 грн! Следующий вопрос:" << endl;
                                cout << questions[i];
                                cout << "Ваш ответ: ";
                                cin >> answer8;
                                if (answer8 == 4) {
                                    i++;
                                    money = money - money + 500000;
                                    cout << "Это правильный ответ. Вы получили 500000 грн! Следующий вопрос:" << endl;
                                    cout << questions[i];
                                    cout << "Ваш ответ: ";
                                    cin >> answer9;
                                    if (answer9 == 3) {
                                        i++;
                                        money = money - money + 750000;
                                        cout << "Это правильный ответ. Вы получили 750000 грн! Следующий вопрос:" << endl;
                                        cout << questions[i];
                                        cout << "Ваш ответ: ";
                                        cin >> answer10;
                                        if (answer10 == 1) {
                                            money = money - money + 1000000;
                                            cout << "Это правильный ответ. Вы выиграли 1000000 грн. Поздравляю!" << endl;
                                        }
                                        else {
                                            cout << "Игра окончена. Вы ответили неправильно. Ваш приз " << money << " грн" << endl;
                                        }
                                    }
                                    else {
                                        cout << "Игра окончена. Вы ответили неправильно. Ваш приз " << money << " грн" << endl;
                                    }
                                }
                                else {
                                    cout << "Игра окончена. Вы ответили неправильно. Ваш приз " << money << " грн" << endl;
                                }
                            }
                            else {
                                cout << "Игра окончена. Вы ответили неправильно. Ваш приз " << money << " грн" << endl;
                            }
                        }
                        else {
                            cout << "Игра окончена. Вы ответили неправильно. Ваш приз " << money << " грн" << endl;
                        }
                    }
                    else {
                        cout << "Игра окончена. Вы ответили неправильно. Ваш приз " << money << " грн" << endl;
                    }
                }
                else {
                    cout << "Игра окончена. Вы ответили неправильно. Ваш приз " << money << " грн" << endl;
                }
            }
            else {
                cout << "Игра окончена. Вы ответили неправильно. Ваш приз " << money << " грн" << endl;
            }
        }
        else {
            cout << "Игра окончена. Вы ответили неправильно. Ваш приз " << money << " грн" << endl;
        }
    }
    else {
        cout << "Игра окончена. Вы ответили неправильно. Ваш приз " << money << " грн" << endl;
    }
}
