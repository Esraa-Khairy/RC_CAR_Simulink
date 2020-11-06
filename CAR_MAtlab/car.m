function varargout = car(varargin)
% CAR MATLAB code for car.fig
%      CAR, by itself, creates a new CAR or raises the existing
%      singleton*.
%
%      H = CAR returns the handle to a new CAR or the handle to
%      the existing singleton*.
%
%      CAR('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in CAR.M with the given input arguments.
%
%      CAR('Property','Value',...) creates a new CAR or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before car_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to car_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help car

% Last Modified by GUIDE v2.5 05-Feb-2020 21:42:03

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @car_OpeningFcn, ...
                   'gui_OutputFcn',  @car_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before car is made visible.
function car_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to car (see VARARGIN)

% Choose default command line output for car
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes car wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = car_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;
open_system('CAR_Simulink.slx')
set_param('CAR_Simulink','SimulationMode','external');
set_param('CAR_Simulink','SimulationCommand','start');




% --- Executes on button press in pushbutton1.
function pushbutton1_Callback(hObject, eventdata, handles)

set_param('CAR_Simulink/Constant','Value', '1');
set_param('CAR_Simulink', 'SimulationCommand', 'update');







% hObject    handle to pushbutton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in pushbutton3.
function pushbutton3_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
set_param('CAR_Simulink/Constant','Value', '3');
set_param('CAR_Simulink', 'SimulationCommand', 'update');


% --- Executes on button press in pushbutton4.
function pushbutton4_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
set_param('CAR_Simulink/Constant','Value', '4');
set_param('CAR_Simulink', 'SimulationCommand', 'update');



% --- Executes on button press in pushbutton5.
function pushbutton5_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton5 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
set_param('CAR_Simulink/Constant','Value', '2');
set_param('CAR_Simulink', 'SimulationCommand', 'update');


% --- Executes on button press in pushbutton8.
function pushbutton8_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton8 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
set_param('CAR_Simulink/Constant','Value', '0');
set_param('CAR_Simulink','SimulationCommand', 'update');


% --- Executes on button press in pushbutton9.
function pushbutton9_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton9 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
set_param('CAR_Simulink/Constant1','Value', '2');
set_param('CAR_Simulink', 'SimulationCommand', 'update');


% --- Executes on button press in pushbutton10.
function pushbutton10_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton10 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
set_param('CAR_Simulink/Constant1','Value', '1');
set_param('CAR_Simulink', 'SimulationCommand', 'update');
